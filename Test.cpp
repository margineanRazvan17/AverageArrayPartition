#include "Test.h"
#include "ArrayPartitionProblem.h"
#include <assert.h>
void Test()
{
	int A1[29] = { 1,2,3,4,5,6,7,8 }, n1 = 8;
	int A2[29] = { 1,2,3 }, n2 = 3;
	int A3[29] = { 1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4 }, n3 = 29;
	int A4[29] = { 1 }, n4 = 1;
	int A5[29] = { 5, 5, 1 }, n5 = 3;

	assert(averageArrayPartition2(A1, n1) == true);
	assert(averageArrayPartition2(A2, n2) == true);
	assert(averageArrayPartition2(A3, n3) == false);
	assert(averageArrayPartition2(A4, n4) == false);

}