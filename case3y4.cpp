case 3:
                printf("\nIngrese el monto a retirar (multiplos de 5): $");
                scanf("%f", &monto);
                retirar(&balance, monto); 
                break;

            case 4:
                printf("\nGracias por usar el cajero automatico. ¡Hasta luego!\n");
                break;

            default:
                printf("\nOpcion invalida. Intente de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}