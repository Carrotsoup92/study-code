/*
 * File: sction_3.c
 * Description: Program reads and analyzes signals of two sensors for object detection.
 *              The data is provided via two separate text files in this Lab.
 */

 #include <stdio.h>

 struct sensorData
 {
    float time;
    double porbability;
 };

 struct sensor
 {
    int id;
    double threshold;
    struct sensorData data[3000];
    int object_detection[3000];
 };

 // check if file opened successfully
 void check_file(FILE *file) {
    if (file == NULL) {
        printf("Error opening file!\n");
    } else {
        printf("File is open\n");
    }
 }
 
int main() {

    FILE *file1 = fopen("C:/Meine_Projekte/VS_Code/study-code/courses/coding-in-C/Lab_6/sensor1.txt", "r"); // r to read only
    check_file(file1);
    FILE *file2 = fopen("../sensor2.txt", "r");
    check_file(file2);

    struct sensor s1 = {.id = 1, .threshold = 0.8};
    struct sensor s2 = {.id = 2, .threshold = 0.7};

    int length = 760;

    for (int i = 0; i < length; i++){
        fscanf(file1, "%f %lf", &s1.data[i].time, &s1.data[i].porbability);
        fscanf(file2, "%f %lf", &s2.data[i].time, &s2.data[i].porbability);   
    }
    fclose(file1);

    // for (int i = 0; i < length; i++){
    //     printf("%.2f, %.3lf ", s1.data[i].time, s1.data[i].porbability);
    //     printf("%.2f, %.3lf\n", s2.data[i].time, s2.data[i].porbability);
    // }

    for (int i = 0; i < length; i++) {
        if(s1.data[i].porbability > s1.threshold) {
            s1.object_detection[i] = 1;
        }
        if(s2.data[i].porbability > s2.threshold) {
            s2.object_detection[i] = 1;
        }
    }

    // for (int i = 0; i < length; i++) {
    //     printf("%d ", s1.object_detection[i]);
    //     printf("%d\n", s2.object_detection[i]);
    // }

    

    return 0;
}



