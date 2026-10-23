#include <stdio.h>
#include <string.h>

struct logs{
    char principalId[15];
    int status_code;
    // bool hardtail;
};


int main(){
    struct logs cloudtrail;
            /* data */
    
    strcpy(cloudtrail.principalId, "Failure");
    cloudtrail.status_code = 100;
    
    printf("Cloudtrail log issue: %s, status code: %d\n",cloudtrail.principalId, cloudtrail.status_code);
    
};


