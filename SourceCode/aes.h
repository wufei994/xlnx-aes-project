#ifndef __AES_H__
#define __AES_H__
#include "ap_int.h"
#include "hls_stream.h"

#define AES_128

#ifdef AES_128
#define Nk 4
#define Nb 4
#define Nr 10
#endif

// #define gmult(a, b) gmult_aes[256*a+b]

typedef ap_uint<8> data_t;
typedef ap_uint<1> m_t;
//typedef ap_uint<128> din_stream;
//typedef ap_uint<128> dou_stream;


void aes(data_t *in, data_t *out, m_t mode);
#endif
