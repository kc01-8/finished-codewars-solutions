//  don't allocate memory for return
//  instead, return a string literal

const char *greet (const char *language)
{
   if (strcmp(language, "english") == 0) {
        return "Welcome";
    } else if (strcmp(language, "czech") == 0) {
        return "Vitejte";
    } else if (strcmp(language, "danish") == 0) {
        return "Velkomst";
    } else if (strcmp(language, "dutch") == 0) {
        return "Welkom";
    } else if (strcmp(language, "estonian") == 0) {
        return "Tere tulemast";
    } else if (strcmp(language, "finnish") == 0) {
        return "Tervetuloa";
    } else if (strcmp(language, "flemish") == 0) {
        return "Welgekomen";
    } else if (strcmp(language, "french") == 0) {
        return "Bienvenue";
    } else if (strcmp(language, "german") == 0) {
        return "Willkommen";
    } else if (strcmp(language, "irish") == 0) {
        return "Failte";
    } else if (strcmp(language, "italian") == 0) {
        return "Benvenuto";
    } else if (strcmp(language, "latvian") == 0) {
        return "Gaidits";
    } else if (strcmp(language, "lithuanian") == 0) {
        return "Laukiamas";
    } else if (strcmp(language, "polish") == 0) {
        return "Witamy";
    } else if (strcmp(language, "spanish") == 0) {
        return "Bienvenido";
    } else if (strcmp(language, "swedish") == 0) {
        return "Valkommen";
    } else if (strcmp(language, "welsh") == 0) {
        return "Croeso";
    }

    // Default case
    return "Welcome";
  }
