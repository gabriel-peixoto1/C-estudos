float calculaDesconto(float preco, int numeroRoupas) {

    float total;

    if (numeroRoupas => 3) {
        numeroRoupas = numeroRoupas - (int)(numeroRoupas/3);
    }

    if(total > 300) {
        total = total*0.9;
    }
    else if(total > 100 && total <= 300) {
        total = total*0.95;
    }
    
    return total; 
}