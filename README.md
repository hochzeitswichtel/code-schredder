# Code-Schredder

Der Hochzeitswichtel-Code-Schredder löscht garantiert geheime Codes, damit
Zahlenschlösser zu unüberwindbaren Hindernissen werden.

✅ Höchste Sicherheit \
✅ Höchste Performance **mit OpenMP**

# Überblick

Die Hauptroutine `wichtel_loesch_den_zahlencode` befindet sich in
[schredder.cpp](schredder.cpp#L3).

# Getting Started

Kompiliere das Programm wie folgt:

```sh
clang++ -fopenmp -o schredder schredder.cpp main.cpp
```

... und führe es aus: `./schredder`

**TODO(hochzeitswichtel):** Bevor das Programm in Produktion verwendet wird, sollten
etwaige Datenrennen geflickt werden.