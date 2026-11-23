struct Body
{
    int height;
    double weight;
};

Body makeStudent(...)
{
    struct Body
{
    int height;
    double weight;
};

Body makeStudent(int fh, double fw, int mh, double mw)
{
    Body b;

    b.height = (int)((fh + mh) / 2.0 + 5);
    b.weight = (fw + mw) / 2.0 - 4.5;

    return b;
}
}