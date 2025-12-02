
float imposto (float renda){

    float cobranca;

    if(renda > 2259.21 && renda < 2826.66){
    
      cobranca = (7.5/100) * renda;

     return cobranca;
    }

        else if(renda > 2826.65 && renda < 3751.06){
    
      cobranca = (15/100) * renda;

     return cobranca;
    }

        else if(renda > 3751.05 && renda == 4664.69){
    
      cobranca = (22.5/100) * renda;

     return cobranca;
    }

        else if(renda > 4664.68){
    
      cobranca = (27.5/100) * renda;

     return cobranca;
    }


}
