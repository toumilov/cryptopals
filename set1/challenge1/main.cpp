
#include <cstdio>
#include <string>
#include "error.hpp"
#include "base64.hpp"

using namespace libcrypto;

int main()
{
    std::string data( "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d" );
    auto result = Base64::encode_hex( data.c_str(), data.size() );
    auto expected_result = "SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t";
    printf( "Set1 Challenge1: %s\n", ( result == expected_result ) ? "PASS" : "FAIL" );
}
