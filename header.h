//#pragma once

int average(int num){
	return num/5;
}

void selectionSort(int array[], int length){
	
	int min, i, j, temp;
	
	for (i = 0; i<length-1; i++){
		min = i;
		
		for (j = i+1; j<length; j++) {
			if(array[j] < array[min])
				min = j;	
		}
		temp = array[min];
		array[min] = array[i];
		array[i] = temp;
	}
	
}
