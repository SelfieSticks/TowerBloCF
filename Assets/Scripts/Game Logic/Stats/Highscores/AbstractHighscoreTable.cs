using System;
using System.Collections.Generic;
using UnityEngine;

public abstract class AbstractHighscoreTable : MonoBehaviour {
    public abstract int SaveHighscore(Highscore highscore);
    public abstract IReadOnlyDictionary<int, Highscore> GetHighscores();
    public abstract Tuple<int, Highscore> GetLastSavedHighscore();
}