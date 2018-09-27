using System;
using System.Collections.Generic;

public interface IHighscoreTable {
    int SaveHighscore(Highscore highscore);
    IReadOnlyDictionary<int, Highscore> GetHighscores();
    Tuple<int, Highscore> GetLastSavedHighscore();
}