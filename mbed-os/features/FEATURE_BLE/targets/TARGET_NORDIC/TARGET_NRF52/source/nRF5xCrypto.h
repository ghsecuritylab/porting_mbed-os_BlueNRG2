/* mbed Microcontroller Library
 * Copyright (c) 2018-2018 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef NRF5X_CRYPTO_
#define NRF5X_CRYPTO_

#include <stdint.h>

#if !defined(MBEDTLS_CONFIG_FILE)
#include "mbedtls/config.h"
#else
#include MBEDTLS_CONFIG_FILE
#endif

#if defined(MBEDTLS_ECDH_C)

#include "mbedtls/platform.h"
#include "mbedtls/entropy.h"
#include "mbedtls/ecp.h"

#include "platform/NonCopyable.h"
#include "ble/BLETypes.h"

namespace ble {
namespace pal {
namespace vendor {
namespace nordic {

/**
 * Toolbox of cryptographic functions used in BLE.
 */
class CryptoToolbox : mbed::NonCopyable<CryptoToolbox> {

public:
    /**
     * Size of the Key used in lesc crypto operations.
     */
    static const ptrdiff_t lesc_key_size_ = public_key_coord_t::size_;

    /**
     * Size of an IRK.
     */
    static const ptrdiff_t irk_size_ = irk_t::size_;

    /**
     * Size of the hash generated by ah.
     */
    static const ptrdiff_t hash_size_ = 3;

    /**
     * Size of prand.
     */
    static const ptrdiff_t prand_size_ = 3;

    /**
     * Create a new CryptoToolbox.
     */
    CryptoToolbox();

    /**
     * Destroy a CryptoTioolbox object.
     */
    ~CryptoToolbox();

    /**
     * Generate lesc public and private keys.
     * @param[out] X The component X of the public key.
     * @param[out] Y The component Y of the public key.
     * @param[out] secret The secret key.
     * @return true if the shared secret has been successfully generated and
     * false otherwise.
     */
    bool generate_keys(
        ArrayView<uint8_t, lesc_key_size_> X,
        ArrayView<uint8_t, lesc_key_size_> Y,
        ArrayView<uint8_t, lesc_key_size_> secret
    );

    /**
     * Generate a shared secret from a peer public key and a local secret key.
     * @param[in] peer_X The component X of the peer public key.
     * @param[in] peer_Y The component Y of the peer public key.
     * @param[in] own_secret The local secret key.
     * @param[out] shared_secret The shared secret generated.
     * @return true if the shared secret has been successfully generated and
     * false otherwise.
     */
    bool generate_shared_secret(
        const ArrayView<const uint8_t, lesc_key_size_>& peer_X,
        const ArrayView<const uint8_t, lesc_key_size_>& peer_Y,
        const ArrayView<const uint8_t, lesc_key_size_>& own_secret,
        ArrayView<uint8_t, lesc_key_size_> shared_secret
    );

    /**
     * Execute the function ah. This function can be used to generate private
     * resolvable addresses and resolve them.
     *
     * @note all parameters passed and return by this fucntion are in little
     * endian.
     *
     * @param[in] irk The key used to create hash.
     * @param[in] prand The random part from which the hash will be generated.
     * @param[out] hash The hash generated.
     *
     * @return true in case of success and false otherwise.
     */
    bool ah(
        const ArrayView<const uint8_t, irk_size_>& irk,
        const ArrayView<const uint8_t, prand_size_>& prand,
        ArrayView<uint8_t, hash_size_> hash
    );

private:
    void load_mpi(mbedtls_mpi& dest, const ArrayView<const uint8_t, lesc_key_size_>& src);

    void store_mpi(ArrayView<uint8_t, lesc_key_size_>& dest, const mbedtls_mpi& src);

    void swap_endian(uint8_t* buf, size_t len);

    bool _initialized;
    mbedtls_platform_context _platform_context;
    mbedtls_entropy_context _entropy_context;
    mbedtls_ecp_group _group;
};

} // nordic
} // vendor
} // pal
} // ble

#endif // defined(MBEDTLS_ECDH_C)

#endif // NRF5X_CRYPTO_
