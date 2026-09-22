#include <stdio.h>

// Aplica dano usando um ponteiro
void aplicarDano(int *vida, int dano) {
    printf("\n--- Aplicando dano ---\n");
    printf("Vida antes: %d\n", *vida);

    *vida = *vida - dano;

    printf("Vida depois: %d\n", *vida);
}

// Restaura vida usando um ponteiro
void restaurarVida(int *vida, int cura) {
    printf("\n--- Restaurando vida ---\n");
    printf("Vida antes: %d\n", *vida);

    *vida = *vida + cura;

    printf("Vida depois: %d\n", *vida);
}

// Ativa o tesouro usando um ponteiro
void ativarTesouro(int *tesouro) {
    printf("\n--- Ativando tesouro ---\n");
    printf("Tesouro antes: %d\n", *tesouro);

    *tesouro = 1;

    printf("Tesouro depois: %d\n", *tesouro);
}

int main() {

    // Variáveis do jogo
    int vida = 100;
    int tesouro = 0;

    // Ponteiros recebem os endereços das variáveis
    int *pVida = &vida;
    int *pTesouro = &tesouro;

    // Estado inicial
    printf("===== INICIO DO JOGO =====\n");
    printf("Vida: %d\n", vida);
    printf("Tesouro: %s\n", tesouro ? "Ativo" : "Inativo");

    // Mostrando os endereços
    printf("\n===== ENDERECOS =====\n");
    printf("Endereco da vida: %p\n", (void*)pVida);
    printf("Endereco do tesouro: %p\n", (void*)pTesouro);

    // Aplicando dano
    aplicarDano(pVida, 30);

    // Restaurando vida
    restaurarVida(pVida, 20);

    // Ativando o tesouro
    ativarTesouro(pTesouro);

    // Estado final
    printf("\n===== ESTADO FINAL =====\n");
    printf("Vida: %d\n", vida);
    printf("Tesouro: %s\n", tesouro ? "Ativo" : "Inativo");

    return 0;
}