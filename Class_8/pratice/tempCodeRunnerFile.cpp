void mystery2(char * string1, const char * string2){
    // int cout=0;
    size_t s1L = strlen(string1);
    size_t s2L = strlen(string2);
    // int s1 = stri;
    for(int i =0; i< s1L; ++i){
            int cout =0;
        for(int j =0; j< s2L; ++j){
            // int cout =0;
            if(string1[i] == string2[j]){
                cout++;
                if(cout == s2L){
                    // cout << "Is string2 a substring of string1" << endl;
                    // cout << "Is string2 a substring of string1" << endl;
                    cout << "Is string2 a substring of string1" << endl;
                    break;
                }            
            }        
        }
    }
}