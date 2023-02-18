#include <romz/random/get_random_bytes.h>

#include <openssl/rand.h>
#include <openssl/err.h>
#include <stdexcept>

namespace romz {

std::vector<unsigned char> get_random_bytes(int num)
{
    std::vector<unsigned char> bytes;
    bytes.resize(num);
    const int rc = RAND_bytes( bytes.data(), bytes.size() );
    if( rc != 1 )
    {
        const unsigned long err = ERR_get_error();
        const std::string txt = "OpenSSL: RAND_bytes. Error: " + std::to_string( err );
        throw std::runtime_error( txt );
    }
    return bytes;
}

}
