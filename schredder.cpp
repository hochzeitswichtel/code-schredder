#include <cstdio>

void wichtel_loesch_den_zahlencode(int code[]) {
    // Für maximale Sicherheit
    //   Lösch ich den Code zehnmal.
    // Für wichtelhafte Einfachheit
    //   Ist OMP das Tool der Wahl.
    # pragma omp parallel for
    for (int i = 0; i < 10; ++i) {
        int quersumme = code[0] + code[1] + code[2];

        // Nun wird der Code des Hochzeitswicht
        //   Komplett mit Nullen überschrieben.
        // So können auch die Schlausten nicht
        //   den Inhalt unsres Koffers kriegen.
        for (int j = 0; j < 3; ++j) {
            quersumme -= code[j];
            code[j] = 0;
        }

        // Und hier der Beweis meines Werks:
        //   Weg ist des Codes Quersumm
        // TODO: doch etwas ist verkorkst
        //   Statt 0 erhalte ich, wie dumm
        // Auch manchmal 18, 13, 9.
        //   Und weitre Werte, die nicht stimmen!
        // Vielleicht hat mein Programm, welch Pein,
        //   Ein unerkanntes Datenrennen. 
        printf("Schaut her, alles ist gelöscht: %d\n", quersumme);
    }
}
