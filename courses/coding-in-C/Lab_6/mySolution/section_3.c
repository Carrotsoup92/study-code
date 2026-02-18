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
    FILE *file2 = fopen("../coding-in-C/Lab_6/sensor2.txt", "r");
    check_file(file2);

    struct sensor s1 = {.id = 1, .threshold = 0.8};
    struct sensor s2 = {.id = 2, .threshold = 0.7};

    int length = 10;

    for (int i = 0; i < length; i++){
        fscanf(file1, "%f %lf", &s1.data->time, &s1.data->porbability);
        printf("%.2f, %.3lf\n", s1.data->time, s1.data->porbability);
    }

    fclose(file1);

    return 0;
}



//     int a = 0;
//     int b = 0;

//     while (fscanf(file_1, "%1d %1d", &a, &b) == 2) {
//         printf("%d, %d\n", a, b);

//     }