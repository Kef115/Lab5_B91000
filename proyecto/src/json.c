#include <stdio.h>
#include "cJSON.h"

void generar_json() {
    cJSON *json = cJSON_CreateObject();
    cJSON_AddStringToObject(json, "nombre", "Kevin Jose Baules Prado");
    cJSON_AddNumberToObject(json, "edad", 23);
    cJSON_AddStringToObject(json, "carnet", "B91000");
    cJSON_AddBoolToObject(json, "estudiante activo", 1); // 1 para true

    char *json_str = cJSON_Print(json);

    FILE *fp = fopen("datos.json", "w"); // Guarda en build/
    if (fp != NULL) {
        fputs(json_str, fp);
        fclose(fp);
        printf("Archivo JSON generado correctamente:\n%s\n", json_str);
    } else {
        printf("Error: No se pudo crear el archivo JSON.\n");
    }

    cJSON_free(json_str);
    cJSON_Delete(json);
}


