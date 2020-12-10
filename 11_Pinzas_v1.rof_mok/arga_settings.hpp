/*******************************************************************************
                          Realizado por |ArgA|MIV
*******************************************************************************/

#define NAME "Pinzas"                             // Colocar nombre de mision
#define COMPLETE_NAME "Pinzas v1"                 // Nombre y versión de la misión
#define IMAGE "imgs\portada_PNZ.jpg"                // Colocar nombre y extension de la imagen de portada, ej "imgs\portada.jpg"
#define DESCRIPTION "Apretando un poco..."     // Colocar descripcion de la mision entre las comillas

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

MAX_DIST_VISION = 2500;
MIN_DIST_VISION =  1300;                            // Distancia de visión reducida por marcador
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
HORARIO = "0740 hs.";
FECHA = "29/11/2020";
CLIMA = "Despejado";
UBICACION = "Península de Kyntire, Duesia.";
SITUACION_HISTORICA = ["Duesia aprovechó la retirada de nuestros buques para traer un destructor que custodie la bahía del lago de Campbeltown. Cercando la bahía, los duecios cuentan con varios puestos e incluso una base de logística donde se acopia la mayoría del material para la Base Aérea. Se detectó el movimiento de los mayores AA al perímetro próximo de la base aérea y al frente al norte de Southend.","ArgA continúa siendo la mayor fuerza internacional en tierra. Las fuerzas internacionales desplegaron una línea de suministros aérea, hacia Southend. Reforzando la posición y alistándose para un posible avance frontal. Se intenta hacer creer a las tropas Duecias que llevarán a cabo un ataque frontal hacia el norte."];
SITUACION = ["La tarea de ArgA consistirá en anular la ventaja Duesia y explotar la debilidad al norte de la bahía del lago de Campbeltown, de manera terrestre se incursionará por el flanco Echo del frente enemigo hasta el extremo sur de la bahía despejando todo puesto Duecio en el camino y sin poder recibir apoyo de aéreo hasta anular los AA enemigos.","Para evitar que la fuerza terrestre reciba un contraataque Cóndor, ubicado en Alfa, debe maniobrar simultáneamente hacia el norte. Donde deberá eliminar las fuerzas de reserva en la Base Hotel, limpiar cualquier posible destacamento en Peninver y continuar su avance hacia el sur. Su objetivo final será despejar los complejos en Juliet y destruir las torres de comunicación cercanas.","Un tercer equipo ya se encuentra próximo a la isla Davaar, donde deberá asegurar la misma, anulando las comunicaciones y los complejos de artillería. Su segunda tarea será infiltrarse desde la popa en el destructor duecio, alcanzar el puente de mando y anular todas las operaciones en el mismo."];
EXTRACTO_INTELIGENCIA = ["AA de Duesia con áreas de acción marcadas con trama en mapa.","Fuerza de respuesta con vehículos de transporte en Base Hotel.","El destructor Duesio no cuenta con munición para sus AA de medio y largo alcance."];
OBJETIVOS = ["Por ruta costera Norte:","Asegurar la Base Hotel y despejar la población cercana y continuar hacia Juliet.","Controlar los 2 complejos del punto Juliet.","Destruir torres de comunicaciones cercanas a Juliet.","Por ruta costera Sur:","Abrir paso por la ruta despejando los complejos Charlie y Delta.","Controlar la Base Oscar.","Destruir o abatir personal en AA de las bases para liberar el espacio aéreo.","En isla Davaar:","Asegurar complejo del faro.","Despejar las posiciones de artillería en área roja próximo a 195 169.","Destruir torre de comunicaciones.","Abandonar la isla e infiltrarse en el destructor duecio en la bahía."];
RECURSOS = ["En Alfa:","Mercedes Comandancia.","Arsenal y Puesto Logístico en LZ.","2 UH-60M.","2 AH-1Z.","Punto Y1/2","2 Pandur II.","Camión Logístico con arsenal médico.","Punto Y3:","3 Mini Submarinos."];
ENEMIGOS = ["Múltiple infantería.","Presencia de blindados ligeros y pesados.","No se estima apoyo aéreo enemigo."];
////////////////////////////////////////////////////////////////////////////////

/* Borrado de IAs enemigas muertas y vehículos destruidos */
RECOLECTOR_BASURA = 1;                              // Activa la funcion que borra las IAs muertas y vehículos destruidos. 1: Activado, 0: Desactivado
RB_TIEMPO_ESPERA_HOMBRES = 120;                     // Tiempo en segundos de espera para eliminar soldados enemigos. 0 Desactiva el borrado de enemigos
RB_TIEMPO_ESPERA_VEHICULOS = 0;                     // Tiempo en segundos de espera para eliminar vehículos enemigos. 0 Desactiva el borrado de vehículos
RB_TIEMPO_ESPERA_BLINDADOS = 0;                     // Tiempo en segundos de espera para eliminar blindados enemigos. 0 Desactiva el borrado de blindados
RB_TIEMPO_ESPERA_AEREOS = 0;                        // Tiempo en segundos de espera para eliminar aereos enemigos. 0 Desactiva el borrado de aereos
RB_DISTANCIA_JUGADORES = 0;                         // Distancia en metros a los jugadores a partir de la cual se borra. 0 desactiva el borrado por distancia
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
AIMING_SHAKE = 0.99; 	                            // Dispersión de apuntado
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