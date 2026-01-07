int removeDuplicates(int* gir, int say) {
    int total = 1; 
    int index = 0; 

    for (int i = 0; i < say - 1; i++) {
        if (gir[i] != gir[i + 1]) { 
            gir[index] = gir[i]; 
            index++;
            total++;
        }
    }

    
    gir[index] = gir[say - 1];

    return index + 1;  
}