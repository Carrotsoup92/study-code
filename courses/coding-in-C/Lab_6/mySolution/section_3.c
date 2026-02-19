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
        // printf("File is open\n");
    }
 }

 void set_object_detection(int length, struct sensor *s) {
    for (int i = 0; i < length; i++) {
        if(s->data[i].porbability > s->threshold) {
            s->object_detection[i] = 1;
        }
    }
 }
 
void time_intervals(int length, struct sensor *s){
    printf("Sensor %d detections:\n", s->id);

    int active = 0;// Detection state: 0 = no object detected, 1 = object detected
    for (int i = 0; i < length; i++){

        // Detect start of an interval (transition from 0 → 1)
        if (s->object_detection[i] == 1 && active == 0){
            printf("Start: %.2f s ", s->data[i + 1].time);
            active = 1;
        }
        // Detect end of an interval (transition from 1 → 0)
        if (s->object_detection[i] == 0 && active == 1)  {
            printf("End: %.2f s\n", s->data[i - 1].time);
            active = 0;
        }        
    }
    // If detection remains active at the final time step,
    // close the interval using the last timestamp
    if (active == 1) {
            printf("End: %.2f s\n", s->data[length - 1].time);
        }
    printf("\n");
}

void combined_signal(int length, struct sensor *s1, struct sensor *s2){
    int active = 0;
    
    for (int i = 0; i < length; i++) {
        if (s1->object_detection[i] ==1  && s2->object_detection[i] == 1){
            if (active == 0) {
                printf("Start: %.2f s ", s1->data[i].time);
                active = 1;
            }
        } else {
            if (active == 1 ) {
                printf("End: %.2f s ", s1->data[i - 1].time);
                active = 0;
            }
        }
    }
    // If still active at end
    if (active == 1)
    {
        printf("End: %.2f s\n", s1->data[length - 1].time);
    }

    printf("\n");
}

int main() {

    FILE *file1 = fopen("C:/Meine_Projekte/VS_Code/study-code/courses/coding-in-C/Lab_6/sensor1.txt", "r"); // r to read only
    check_file(file1);
    FILE *file2 = fopen("../sensor2.txt", "r");
    check_file(file2);

    struct sensor s1 = {.id = 1, .threshold = 0.8};
    struct sensor s2 = {.id = 2, .threshold = 0.7};

    int length = 3000;

    for (int i = 0; i < length; i++){
        fscanf(file1, "%f %lf", &s1.data[i].time, &s1.data[i].porbability);
        fscanf(file2, "%f %lf", &s2.data[i].time, &s2.data[i].porbability);   
    }
    fclose(file1);

    set_object_detection(length, &s1);
    set_object_detection(length, &s2);

    time_intervals(length, &s1);
    time_intervals(length, &s2);

    combined_signal(length, &s1, &s2);

    return 0;
}



