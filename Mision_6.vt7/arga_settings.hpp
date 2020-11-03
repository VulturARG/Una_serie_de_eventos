/*******************************************************************************
                          Realizado por |ArgA|MIV
*******************************************************************************/

#define NAME "Limpieza"                             // Colocar nombre de mision
#define COMPLETE_NAME "Limpieza v1"                 // Nombre y versión de la misión
#define IMAGE "imgs\portada_LMP.jpg"               // Colocar nombre y extension de la imagen de portada, ej "imgs\portada.jpg"
#define DESCRIPTION "Ganando corazones y mentes"    // Colocar descripcion de la mision entre las comillas

author = "Shaggy - Vultur";                         // Editor (Pone tu nombre)
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

MAX_DIST_VISION = 2000;
MIN_DIST_VISION =  800;                             // Distancia de visión reducida por marcador
EQUIPAMIENTO_PERSONALIZADO = 1;                     // Equipamiento guardado en arsenal virtual. 1: Permite, 0: No Permite.
COMPUTADORA_ARTILLERIA = 1;                         // Computadora artilleria. Habilita: 1. Desabilita: 0.
ROL_AUTOMATICO = 1;                                 // 1: Habilita la carga de rol al entrar a la misión por descripción de rol. 0: Desabilita
                                                    // Para verificar que los roles estan bien escritos activar todas las IAs y entrar
GPS = 0;                                            // Agrega GPS vanilla en rol automático o caja. 1: agrega, 0: remueve
VISION_NOCTURNA = 0;                                // Agrega visión nocturna panorámica en rol automático o caja. 1: agrega, 0: remueve
TIPO_VN = "ACE_NVG_Wide";                           // Tipo de la visión nocturna que se va a agregar en rol automático o caja.

INSIGNIA_AUTOMATICA = 1;                            // Añade insignias por pelotón o médicas. 1: Añade, 0: No Añade
INSIGNIA_IR = 0;                                    // Establece si las insignias son IR (1) o normales (0).

SETUP_PERSONALIZADO_RADIOS = 1;                     // Activa el setup de las radios de ACRE2. 1: activado, 0: desactivado


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
HORARIO = "0600 hs.";
FECHA = "05/10/2020";
CLIMA = "Despejado";
UBICACION = "Virolahti";
SITUACION = ["Nuestro sector operacional se calmó tras un tenso y efectivo primer despliegue, las tareas de patrullas y el ejercer como una policía militar local es la tarea diaria.", "Recientemente, múltiples civiles denunciaron asaltos y avistamientos constantes de guerrilla en los bosques y caminos al Norte de la R.N. 18. Para evitar la propagación de esta célula guerrillera se nos ordenó iniciar una operación de limpieza. ArgA que patrullará el sector marcado en mapa de Oeste a Este hasta el LZ de recogida Hotel Zulu.", "Helicópteros de la Fuerza Internacional dejaron a ArgA en los puntos Lima Yankee (Yaguar 1 y 2), Lima Charlie (Cóndor) y Lima Mike (Y3 y Comandancia)."];
SITUACION_HISTORICA = ["La República de Viro, es un territorio estratégico cuya parte continental posee abundantes recursos naturales y a su vez contiene una serie de islas ubicadas estratégicamente. Debido a la diversidad geográfica y los cambios políticos nunca consolidó un sentimiento nacional único.","Actualmente el estado atraviesa una tensa calma después de la guerra civil que aconteció hace más de 5 años atrás en una situación que fue aprovechada por su vecino del norte, Duesia, una potencia regional. Una antigua provincia de Duesia, que desde la caída de la V.P.C.C. bajo administración de Viro, limítrofe a su anterior nación y con mayoría étnica de esta potencia fue donde se encendió la mecha de la guerra civil. Se sospecha que era apoyada estrechamente con armas y provisiones por Duesia. Se cree que nunca cesó ese apoyo. Una coalición internacional puso fin a la guerra civil y desde entonces mantiene presencia en todo el país para evitar que la historia se repita.","ArgA ha sido recientemente desplegado en la subprefectura de Virolahti, zona donde comenzó la guerra civil, sin embargo, ha permanecido relativamente calmada los últimos tiempos pese a la permisividad del mando anterior las de fuerzas internacionales."];
EXTRACTO_INTELIGENCIA = ["Existen en el sector civiles armados. No todos son hostiles. Es posible que miembros de la guerrilla se rendirán sin pelear. Algunos son civiles neutrales que han decidido patrullar la zona por justicia propia."];
OBJETIVOS = ["Peinar toda la franja asignada, fotografiar cualquier armamento y destruirlo, arrestar todo personal armado.", "Reglas de Combate:","Los civiles cercanos a nuestros Limas son víctimas de la violencia guerrillera, por lo cual son aliados a nuestra causa.","Todo civil armado dentro del sector debe ser considerado hostil solamente si abre fuego sin provocación contra ArgA. Disparar en presencia de civiles, aunque sea al aire o en otra dirección puede ser considerado una provocación. No disparar en presencia de civiles bajo ninguna circunstancia si estos no disparan primero.", "No disparar o responder fuego de fuerzas regulares del país limítrofe. Aunque se encuentren en territorio de Viro."];
RECURSOS = ["Aparecemos armados y listos para el combate."];
ENEMIGOS = ["Milicanos armados"];
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