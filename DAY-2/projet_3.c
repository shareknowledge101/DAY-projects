#include <stdio.h>

int main()
{
    // jz ajoute un conversionn Heures de départ en minutes
    int depart_times[] = {
        8 * 60 + 0,    // 8:00
        9 * 60 + 43,   // 9:43
        11 * 60 + 19,  // 11:19
        12 * 60 + 47,  // 12:47
        14 * 60 + 0,   // 14:00
        15 * 60 + 45,  // 15:45
        19 * 60 + 0,   // 19:00
        21 * 60 + 45   // 21:45
    };

    // conversion des Heures d'arrivée correspondantes en minutes 
    int arrival_times[] = {
        10 * 60 + 16,  // 10:16
        11 * 60 + 52,  // 11:52
        13 * 60 + 31,  // 13:31
        15 * 60 + 0,   // 15:00
        16 * 60 + 8,   // 16:08
        17 * 60 + 55,  // 17:55
        21 * 60 + 20,  // 21:20
        23 * 60 + 58   // 23:58
    };

    int heure, minutes, user_time;
    int i, min_diff = 99999; // pour eviter le conflit en plus de marke un point de depart numerique
    int closest_index = 0;

    printf("\nEntrer l'Heure de depart : ");
    scanf("%d", &heure);

    printf("\nEntrer Minutes de depart : ");
    scanf("%d", &minutes);

    user_time = heure * 60 + minutes;

    printf("Heure saisie en minutes : %d\n", user_time);

    // Cherche l'indice du vol le plus proche
    for (i = 0; i < 8; i++) {

        int diff = depart_times[i] - user_time;

        if (diff < 0) diff = -diff;

        if (diff < min_diff) {
            min_diff = diff;
            closest_index = i;
        }
    }

    int dep_heure = depart_times[closest_index] / 60;

    int dep_min = depart_times[closest_index] % 60;

    int arr_hour = arrival_times[closest_index] / 60;
    
    int arr_min = arrival_times[closest_index] % 60;

    printf("Le vol le plus proche part à : %02d:%02d\n", dep_heure, dep_min);
    printf("Heure d'arrivée correspondante : %02d:%02d\n", arr_hour, arr_min);

    return 0;
}
