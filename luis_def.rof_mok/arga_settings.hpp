/*******************************************************************************
                          Realizado por |ArgA|MIV
*******************************************************************************/

#define NAME "Fin del Sueño"                        // Colocar nombre de mision
#define COMPLETE_NAME "Fin del Sueño v2"            // Nombre y versión de la misión
#define IMAGE "imgs\portada_FDS.jpg"                // Colocar nombre y extension de la imagen de portada, ej "imgs\portada.jpg"
#define DESCRIPTION "¿Saldremos de esta?"           // Colocar descripcion de la mision entre las comillas

AUTHOR = "Shaggy - Vultur";                         // Editor (Pone tu nombre)
AUTHOR_UID = ["76561198030188168","76561198010777357"];// Colocar entre las comillas el numero que aparece en la lista de abajo. Si son mas de un autor poner con la forma ["nro 1", "nro 2"]
                                                    // Axel: 76561198869072681, Camello: 76561198197706543, Ignacio: 76561198026915573, Joaco: 76561198090717772, Maxi: 76561198091139370, Maxtor: 76561198824233052, Nico: 76561198077670923, Night: 76561198090664588, Nogo: 76561198849038806, Ñato: 76561199027826936, Paco: 76561198030163544, Peta: 76561198279642154, Roke: 76561198883929795, Shaggy: 76561198030188168, Soda: 76561198122043854, Vultur: 76561198010777357, Zorro: 76561198027580786

IMG_LOGO = "imgs\logoArgA.jpg";                     // Nota: Las imagenes deberian estar en
COLOR_AUTOR = "#76a8f7";                            // formato .paa y en proporcion 2x1 (1024x512)
ES_CAMPANIA = 1;                                    // tamaño logo: 323px x 323px
NOMBRE_CAMPANIA = "Una Serie de Eventos...";
INTRO_PERSONALIZADA = 1;                            // 1 Si la deseas cargar una intro personalizada (propia)
                                                    // y en el parametro INTRO la dirección del archivo entre comillas
                                                    // EJ. INTRO_PERSONALIZADA = 1; INTRO = "scripts\intro_propia.sqf";
INTRO = "scripts\intro_campania.sqf";               // Intros: 1 y 2. Para desactivar: 0

//INTRO_PERSONALIZADA = 0;
//INTRO = 0;

MAX_DIST_VISION = 2700;
MIN_DIST_VISION =  1000;                            // Distancia de visión reducida por marcador
EQUIPAMIENTO_PERSONALIZADO = 0;                     // Equipamiento guardado en arsenal virtual. 1: Permite, 0: No Permite.
COMPUTADORA_ARTILLERIA = 1;                         // Computadora artilleria. Habilita: 1. Desabilita: 0.
ROL_AUTOMATICO = 1;                                 // 1: Habilita la carga de rol al entrar a la misión por descripción de rol. 0: Desabilita
                                                    // Para verificar que los roles estan bien escritos activar todas las IAs y entrar
GPS = 0;                                            // Agrega GPS vanilla en rol automático o caja. 1: agrega, 0: remueve
VISION_NOCTURNA = 0;                                // Agrega visión nocturna panorámica en rol automático o caja. 1: agrega, 0: remueve
TIPO_VN = "ACE_NVG_Wide";                           // Tipo de la visión nocturna que se va a agregar en rol automático o caja.
HALO = 0;                                           // 1: Guarda en contenido de la mochila y pone un paracaidas en la unidad al inicio de la misión. Al tocar tierra se vuelve a poner la mochila automáticamente. 0: Desactiva
HALO_ALTURA_MINIMA_ACTIVACION = 1000;               // Altura en metros mínima que se le pone un paracaidas si HALO esta activado. Todas las unidades por debajo de esa altura no reciben paracaidas al inicio

INSIGNIA_AUTOMATICA = 1;                            // Añade insignias por pelotón o médicas. 1: Añade, 0: No Añade
INSIGNIA_IR = 0;                                    // Establece si las insignias son IR (1) o normales (0).

SETUP_PERSONALIZADO_RADIOS = 0;                     // Activa el setup de las radios de ACRE2. 1: activado, 0: desactivado


/* 
EQUIPAMIENTO
    Camuflajes disponibles:          Tipos disponibles:
       - Bosque                        - Multicam 
       - Desierto                      - Marpat
       - Selva                         - Liso
       - Negro

       - Personalizado (se debe ingresar mas abajo la clase del uniforme, chaleco, casco y mochila)
       - No editar (no se le modificara ninguna de las 4 cosas al jugador, solo arma y equipo interno)

         Las opciones Personalizada y No editar pueden llevar a comportamientos inesperados.
         Por lo que el editor queda a cargo de checkear y revisar el correcto funcionamiento.
*/
CAMUFLAJE = ["Bosque", "Multicam"];
GAFAS_INICIALES = "";
UNIFORME_PERSONALIZADO = "";
CASCO_PERSONALIZADO = "";
CHALECO_PERSONALIZADO = "";
MOCHILA_PERSONALIZADO = "";
MOCHILA_CHICA_PERSONALIZADO = "";
////////////////////////////////////////////////////////////////////////////////

/* 
BRIEFING
    Cada elemento del array es un parrafo
    Ejemplo: ["Primer parrafo", "Segundo parrafo"] 
*/
BRIEFING = 1;                                       // 1: Muestra, 0: No muestra
CARACTER = "Oficial";
HORARIO = "0900 hs.";
FECHA = "30/11/2020";
CLIMA = "Despejado";
UBICACION = "Península de Kyntire, Duesia.";
SITUACION_HISTORICA = ["El avance de la otra columna ArgA permitió, pese las bajas, la destrucción de las principales defensas Duecias en la orilla Echo temporalmente, los destructores de la fuerza internacional lograron aproximarse en esta brecha y realizar un ataque seguido de un ataque aéreo a las principales posiciones Duecias en la península. La operatividad de las comunicaciones Duecias les permitieron realizar un repliegue coordinado a un perímetro cercano a la Base Aérea Kyntire, tomando poblaciones con presencia civil y también trasladando civiles a la base aérea para evitar recibir el fuego naval y el derribo de 1 caza aliado confirma la presencia de AA de corto alcance en el núcleo de la base.", "Inteligencia informó que los Duecios ya disponen 1 división blindada en la zona y se encuentran a la espera de 7 divisiones blindadas de refuerzo para mañana, con intención de arrollar nuestras posiciones hasta el mar."];
SITUACION = ["Nuestra situación es desesperada, si no tomamos la base aérea hoy no seremos capaces de fortificarnos ni generar una tierra de nadie al Norte desde donde el fuego de apoyo pueda encargarse de las divisiones blindadas. Primero debemos romper el frente Duecio tomando alguna de las poblaciones, para evitar el rodeo Duecio por todos los sectores. Nuestra maniobra contigua dependerá de controlar tomar toda la franja de la base, teniendo que despejar la ciudad de Campbeltown. Esto a su vez permitirá a otras fuerzas internacionales realizar el rodeo de las poblaciones del frente Duecio, debemos extremar precauciones pues la presencia civil en toda población puede confundirse con la guerrilla avistada.", "Yaguar se encuentra en un punto avanzado por la ruta principal, Condor en base Alfa, mientras que Comandancia se ubica en una estancia en la retaguardia de Yaguar."];
EXTRACTO_INTELIGENCIA = ["AA de Duesia con áreas de acción marcadas con trama roja en mapa.", "Posiciones de morteros próximas a colina Balliwilline", "Posición Oscar fue bombardeada pero se desconoce que esté despejada."];
OBJETIVOS = ["Tomar Base Aérea Kyntire.", "Asegurar población Campbeltown.", "Despejar 1 población menor del frente Duecio.", "Destruir posiciones de morteros.", "Rescatar piloto de caza.", "Destruir todo blindado enemigo."];
RECURSOS = ["En Alfa:", "Arsenal y Puesto Logístico en LZ.", "2 UH-60M.", "2 AH-1Z.", "Punto avanzado Yaguar:", "1 Leopard II.", "1 Pandur II.", "3 Humvees c/M2.", "1 Humvee médico.", "Camión de transporte y logístico con arsenal.", "Comandancia: Vehículo Mercedes"];
ENEMIGOS = ["Múltiple infantería.", "Presencia de MBT Merkava y TBP Stryker.", "No se espera apoyo aéreo enemigo.", "Guerrilla en población."];
////////////////////////////////////////////////////////////////////////////////

/* Borrado de IAs enemigas muertas y vehículos destruidos */
RECOLECTOR_BASURA = 1;                              // Activa la funcion que borra las IAs muertas y vehículos destruidos. 1: Activado, 0: Desactivado
RB_TIEMPO_ESPERA_HOMBRES = 120;                     // Tiempo en segundos de espera para eliminar soldados enemigos. 0 Desactiva el borrado de enemigos
RB_TIEMPO_ESPERA_VEHICULOS = 0;                     // Tiempo en segundos de espera para eliminar vehículos enemigos. 0 Desactiva el borrado de vehículos
RB_TIEMPO_ESPERA_BLINDADOS = 0;                     // Tiempo en segundos de espera para eliminar blindados enemigos. 0 Desactiva el borrado de blindados
RB_TIEMPO_ESPERA_AEREOS = 0;                        // Tiempo en segundos de espera para eliminar aereos enemigos. 0 Desactiva el borrado de aereos
RB_DISTANCIA_JUGADORES = 50;                         // Distancia en metros a los jugadores a partir de la cual se borra. 0 desactiva el borrado por distancia
////////////////////////////////////////////////////////////////////////////////

/* Camuflaje */
COEFICIENTES_CAMUFLAJE = 0;                         // 1: Activada. 0: Desactivada.
COEFICIENTE_AUDICION = 1;                           // Valores menores hacen al jugador mas difícil de escuchar. Valores decimales ente 0 y 1.
COEFICIENTE_CAMUFLAJE = 1;                          // Valores menores hacen al jugador mas difícil de detectar. Valores decimales ente 0 y 1.
////////////////////////////////////////////////////////////////////////////////

/* IA - CONFIGURACION */
IA_DE_GRUPO = 0;                                    // 1: No desactiva la IA del Grupo de los jugadores, 0: la desactiva.
IA_BLUFOR = 1;                                      // 1: No desactiva la IA Blufor, 0: la desactiva.
DIFICULTAD_IA_PERSONALIZADA = 0;                    // 1: Activada. 0: Desactivada.
AIMING_ACCURACY = 0.01;                             // Precision de apuntado
AIMING_SHAKE = 0.90; 	                            // Dispersión de apuntado
AIMING_SPEED = 0.1; 	                            // Velocidad de apuntado
SPOT_DISTANCE = 0.3; 	                            // Distancia de avistamiento
SPOT_TIME = 0.5; 		                            // Tiempo de avistamiento
COURAGE = 0.25; 		                            // Coraje
RELOAD_SPEED = 0.25; 	                            // Velocidad de recarga
COMMANDING = 0.75; 		                            // Liderazgo
////////////////////////////////////////////////////////////////////////////////

/* Modificar desde los define que estan arriba de todo.
NO TOCAR LO QUE ESTA ABAJO DE ESTA LINEA             */
onLoadName = NAME;	                                // Nombre de carga
briefingName = COMPLETE_NAME;                       // Nombre en briefing
onLoadMission = DESCRIPTION;                        // Pie de carga
overviewText = DESCRIPTION;                         // Pie en seleccion de mision
overviewPicture = IMAGE;                            // Imagen en seleccion de mision
loadScreen = IMAGE;                                 // Imagen en carga
////////////////////////////////////////////////////////////////////////////////

/*******************************************************************************
                         Realizado por |ArgA|MIV
*******************************************************************************/