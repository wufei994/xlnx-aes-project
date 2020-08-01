#include "aes.h"
#include <iostream>

using namespace std;

int main(void)
{
	data_t out[4*Nb];
	m_t mode = 0;
	data_t in[16] = {
			0x00, 0x11, 0x22, 0x33,
			0x44, 0x55, 0x66, 0x77,
			0x88, 0x99, 0xaa, 0xbb,
			0xcc, 0xdd, 0xee, 0xff};
	cout << "Original Message: " << in[0] << endl;
	for(int i = 0; i < 4; ++i) {
		cout << in[4*i+0] << " " << in[4*i+1] << " " << in[4*i+2] << " "<< in[4*i+3] << endl;
	}
	printf("\n");

	aes(in, out, mode);
	printf("Ciphered Message: \n");
	for(int i = 0; i < 4; ++i) {
		cout << out[4*i+0] << " " << out[4*i+1] << " " << out[4*i+2] << " "<< out[4*i+3] << endl;
	}
	printf("\n");
	mode = 1;
	aes(out, in, mode);
	printf("After Inv Cipher:\n");
	for(int i = 0; i < 4; ++i) {
		cout << in[4*i+0] << " " << in[4*i+1] << " " << in[4*i+2] << " "<< in[4*i+3] << endl;
	}
	printf("\n");
}
