#include <iostream>
#include <unistd.h>
#include <getopt.h>

using namespace std;

void version(const char*);
void help();

int main(int argc, char *argv[]) {

    int rez = -1;
    int option_index;
    const char* short_options = "hv::";

    const struct option long_options[] = {
            {"help",no_argument,NULL,'h'},
            {"version",optional_argument,NULL,'v'},
            {NULL,0,NULL,0}
    };

    int h_counter = 1;
    int v_counter = 1;

    while ((rez = getopt_long(argc, argv, short_options, long_options, &option_index))  != -1) {
        switch(rez){

            case 'h': {
                if (h_counter < 1){
                    goto exitH;
                }
                h_counter--;
                help();
                exitH: break;
            }
            
            case 'v': {
                if (v_counter < 1){
                    goto exitV;
                }
                v_counter--;
                if (optarg!=NULL)
                    version(optarg);
                else
                    version("1.0");
                exitV: break;
            }

            case '?': default: {

                printf("unexpected value\n");
                break;

            }
        }
    }
}

void version(const char* ver){

    printf("version: %s\n", ver);

}

void help(){

    printf("help...\n");

}