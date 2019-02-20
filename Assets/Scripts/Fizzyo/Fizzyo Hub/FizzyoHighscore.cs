using Fizzyo;
using System;
using System.Collections.Generic;

public class FizzyoHighscore : AbstractHighscoreTable
{
    public override int SaveHighscore(Highscore highscore)
    {
        FizzyoFramework.Instance.Achievements.PostScore(highscore.Score);
        return 0;
    }

    public override IReadOnlyDictionary<int, Highscore> GetHighscores()
    {
        throw new NotImplementedException(); 
    }

    public override Tuple<int, Highscore> GetLastSavedHighscore()
    {
        throw new NotImplementedException();
    }
}
