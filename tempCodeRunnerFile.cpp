void refreshVec(int _arg)
{
    for (int i = mid.size() - 1; i >= 0; i++)
    {
        if (mid[i] <= _arg)
        {
            mid.erase(mid.begin() + i);
        }
    }
    mid.push_back(_arg);
}