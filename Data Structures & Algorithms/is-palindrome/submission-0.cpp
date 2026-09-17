
class Solution {
public:
    bool isPalindrome(std::string s) {
        int izq = 0; 
        int der = s.length() - 1; 
        
        // Usamos izq < der para evitar que se crucen o entren en bucle infinito
        while (izq < der) {
            // Ignorar caracteres no alfanuméricos desde la izquierda
            if (!std::isalnum(static_cast<unsigned char>(s[izq]))) {
                izq++;
            }
            // Ignorar caracteres no alfanuméricos desde la derecha
            else if (!std::isalnum(static_cast<unsigned char>(s[der]))) {
                der--; // Importante: decrementar, no incrementar
            }
            // Si ambos son válidos, comparar ignorando mayúsculas
            else {
                if (std::tolower(static_cast<unsigned char>(s[izq])) != 
                    std::tolower(static_cast<unsigned char>(s[der]))) {
                    return false;
                }
                izq++;
                der--; // Mover ambos hacia el centro
            }
        }
        
        return true; 
    }
};
