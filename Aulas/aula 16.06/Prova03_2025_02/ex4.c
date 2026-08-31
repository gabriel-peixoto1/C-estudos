int mdc(unsigned int a, unsigned int b) {

    if (b == 0) {
        return a;
    }

    return mdc(b,a%b);
}

// nao entendi 100% ainda, mas não parece ser muito dificil não. 