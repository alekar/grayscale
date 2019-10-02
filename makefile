all: grayscale

grayscale: grayscale.c
	clang -std=c11 -framework ApplicationServices -o grayscale grayscale.c
