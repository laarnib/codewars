/* Growth of a Population */

int nbYear(int p0, double percent, int aug, int p) {

    int years = 0;
    double population = p0;
    
    while (population < p)
    {
        population = population + (population * (percent/100)) + aug;
        years++;
    }
    
    return years;
}