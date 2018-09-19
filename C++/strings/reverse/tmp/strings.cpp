class Solution {

public:

    void reverse(string&s, int begin, int end) {

        while(begin<end) {
            char tmp = s[begin];
            s[begin] = s[end];
            s[end] = tmp;
            cout<<"begin: "<<s[begin]<<" end: "<<s[end]<<endl;
            begin++;
            end--;

        }
    }


      //copies from cp_start and returns the next index of last character of the copied word

    int  copy(string& s, int cp_start, int word_start,int word_end) {
        int i = word_start;
        while(i<= word_end){
            s[cp_start] = s[i];
            i++;
            cp_start++;
        }

        return cp_start;
    }

        

    

    void remove_space(string& s) {

        int cp_start =0;
        int word_start =0;
        int word_end =0;
        int i=0;

        while(s[i] != '\0') {

            if(s == "" ) return;
            cout<<"i: "<<i<<" word_start: "<<word_start<<" word_end: "<<word_end<<" cp_start: "<<cp_start<<endl;
            while(s[i] == ' '){
                i++;
            }

            cout<<"i1: "<<i<<endl;
            

            if(s[i] == '\0') { 
                break;
            }

            word_start = i;

            cout<<"i2: "<<i<<" word_start: "<<word_start<<endl;

            

            while(s[i] != ' ' || s[i] != '\0') {
                i++;
            }


            word_end = i-1;

            

            if(word_start != cp_start) {

                cp_start = copy(s,cp_start,word_start,word_end);

            }

            else {

                cp_start = word_end+1;

            }

            cout<<"s_aftercopy: "<<s<<endl;

            

            if(cp_start == '\0') return;

            cp_start ++;

            if(cp_start == '\0') return;

        }

        

        s[cp_start] = '\0';

    }

    

    string reverseWords(string s) {

        int word_begin;

        word_begin = 0;

        int word_end = 0;

        //remove spaces

        remove_space(s);

        

        // while(s[word_end] != '\0') {

        //     if(s[word_end] == ' ') {

        //         cout<<"wb0:"<<word_begin<<" we0: "<<word_end-1<<endl;

        //         reverse(s, word_begin, word_end -1);

        //         word_end++;

            

        //         while(s[word_end] ==  ' ') {word_end++;}

        //         word_begin = word_end;

        //     }

        //     else word_end++;

            

        // }

        

        // cout<<"wb: "<<word_begin<<" we: "<<word_end-1<<endl;

        // reverse(s, word_begin,word_end-1);

        return s;

    }

    

    

};
