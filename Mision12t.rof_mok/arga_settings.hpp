/*******************************************************************************
                          Realizado por |ArgA|MIV
*******************************************************************************/

#define NAME "M12t"                             // Colocar nombre de mision
#define COMPLETE_NAME "USDE Pre12t"                 // Nombre y versión de la misión
#define IMAGE "imgs\portada_FDS.jpg"                // Colocar nombre y extension de la imagen de portada, ej "imgs\portada.jpg"
#define DESCRIPTION "Entonces quedaron tres..."     // Colocar descripcion de la mision entre las comillas

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
HORARIO = "0810 hs.";
FECHA = "26/11/2020";
CLIMA = "Despejado";
UBICACION = "Península de Kyntire, Duesia.";
SITUACION_HISTORICA = ["La invasión a la península está desarrollándose más lenta de lo planeado, impidiendo generar una brecha clara para un desembarco mayor. Este retraso le proporcionó a las fuerzas Duecias la posibilidad de instalarse en una segunda línea y en diferentes complejos hacia el norte marcados en mapa. Dicha situación permitió a Duecia reactivar e instalar más radares en puntos fuertes y de artillería costera al oeste. La seguridad de nuestros buques ha sido comprometida y el apoyo de ala fija en territorio profundo ha sido neutralizado.","ArgA es la única fuerza internacional en tierra. Deberá administrar sus recursos hasta que la flota pueda aproximarse nuevamente para continuar la campaña de toma de la base aérea. Fuerzas internacionales realizarán una operación de diversión en otra región con fin de atraer a las fuerzas aéreas duecias."];
SITUACION = ["ArgA se encuentra con todo el equipo que pudo desembarcar prematuramente en la base Alfa. No dispone de apoyo alguno de las fuerzas internacionales. Su objetivo consiste en destruir toda pieza de artillería naval, radar y asegurar los complejos de Torr Mor [036043].","Deberá controlar el pueblo de southend, el único foco de resistencia de Duesia cercano a la costa. Capturar o ejecutar a todo oficial del castillo Knockstapple donde se encuentran arsenales y se concentra la logística Duecia del sur."];
EXTRACTO_INTELIGENCIA = ["AA únicamente en torno al aeropuerto, con áreas de acción marcadas en mapa.","La zona de Torr Mor es aislada con un solo camino de acceso bien defendido.","Los drones reportaron soldados Duecios aislando el propio Torr Mor con un arco defensivo desde Sliabh a’ Bhiorain [034090], pasando por Corr nan Long [083070] hasta Carraig Sgeith [094038]. Plantaron campos de minas defendiendo la línea de cotas y se vieron puestos de observación de artillería"];
OBJETIVOS = ["Asegurar población Southend.","Infiltrarse en el castillo Knockstapple, capturar o ejecutar oficiales y destruir torre de radio.","Asegurar complejos cercanos a Torr Mor 036043, destruir radar, artillería costera y torre de radio."];
RECURSOS = ["En Alfa:","Arsenal y vehículo logístico.","2 Pandur II.","2 Humvees artillados con M2.","2 UH-60M.","2 AH-1Z."];
ENEMIGOS = ["Multiple infantería.","Presencia de blindados ligeros y pesados.","No se estima apoyo aéreo enemigo."];
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