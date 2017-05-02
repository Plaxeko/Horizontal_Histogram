int main(int argc, char * argv[])
{

        int total[26] = {0};
        int c ;
//count char frequency in file
        while ( ! cin.eof() )
        {
          c = cin.get();
            if (isalpha(c))
            {
                c = tolower(c);
                int index = c - 'a';
                total[index]++;
            }
        }

//print count
        for (int i = 0; i < 26; i++)
        {
        cout  << "count" << "[" << setw(2) << i << "]:" << total[i] << endl;
        }
        int max = total[0];

//get max
        for(int j = 0; j < 26; j++ )
        {
           if (total[j] > max)
           {
             max = total[j];
           }
        }
          cout << endl;
          cout <<  "max: " <<max << endl;

//graph header
         cout << endl << "Graph:" << endl;
         cout << ' ' << endl << endl;;

//generate histogram
         for( int lines = 0; lines < 26; lines++ )
         {
            printf("%*i %c ", 4 ,total[lines], lines+'a');
                for ( int i = 0; i < 50; i++ )
                {
                    if( total[lines] > max * i / 50 )
                    {
                       cout << "=";
                    }
                    else
                    {
                       cout << "";
                    }
                 }
             cout << endl;
         }
    return 0;
}



