#include <iostream>
#include <cstdlib>
#include <string>
#include "RadixSort.h"
#include "SortRoutine.h"
#include <vector>

using namespace std;

RadixSort::RadixSort() : SortRoutine() 
{
	exponent=0;
	radix=10;
}

int RadixSort::findExponent(int array[], int size)
{
	for(int i=0;i<size;i++)
	{
		if(std::pow(radix,exponent)-1 < array[i])
			exponent++;
	}
	return exponent;
}

void RadixSort::sort(int array[], int size)
{
	setSize( size );
	radixS( array, size, getRadix(), findExponent(array,size) );
}

void RadixSort::radixS(int array[], int size, int radix, int exponent)
{
	std::vector<int> bucket[10];
	int decimal=10;

	for(int s=0;s<size;s++)
	{
		bucket[array[s] % radix].push_back(array[s]);
	}
	
	for(int i=0; i < exponent-1; i++)
	{
		for(int b=0; b<10; b++)
		{
			size_t vectorsize=bucket[b].size();
			for(size_t v=0; v<vectorsize; v++)
			{
				bucket[(bucket[b].front()/decimal) % radix].push_back(bucket[b].front());
				bucket[b].erase(bucket[b].begin());
			}
		}
		decimal*=10;
	}
}

int RadixSort::getRadix()
{
	return radix;
}

string RadixSort::name() const
{
	return( "RadixSort" );
}

