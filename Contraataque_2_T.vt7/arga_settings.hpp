/*******************************************************************************
                          Realizado por |ArgA|MIV
*******************************************************************************/

#define NAME "Contrataque 2"                          // Colocar nombre de mision
#define COMPLETE_NAME "Contrataque 2 V1"              // Nombre y versión de la misión
#define IMAGE "imgs\portada_CAT2.jpg"                // Colocar nombre y extension de la imagen de portada, ej "imgs\portada.jpg"
#define DESCRIPTION "Devolviendo favores"           // Colocar descripcion de la mision entre las comillas

author = "Shaggy - Vultur";                         // Editor (Pone tu nombre)
IMG_LOGO = "imgs\logoArgA.jpg";                     // Nota: Las imagenes deberian estar en
COLOR_AUTOR = "#76a8f7";                            // formato .paa y en proporcion 2x1 (1024x512)
ES_CAMPANIA = 1;                                    // tamaño logo: 323px x 323px
NOMBRE_CAMPANIA = "Una Serie de Eventos...";
//INTRO_PERSONALIZADA = 1;                            // 1 Si la deseas cargar una intro personalizada (propia)
                                                    // y en el parametro INTRO la dirección del archivo entre comillas
                                                    // EJ. INTRO_PERSONALIZADA = 1; INTRO = "scripts\intro_propia.sqf";
//INTRO = "scripts\intro_campania.sqf";               // Intros: 1 y 2. Para desactivar: 0

INTRO_PERSONALIZADA = 0;
INTRO = 0;

MAX_DIST_VISION = 2500;
MIN_DIST_VISION =  800;                             // Distancia de visión reducida por marcador
EQUIPAMIENTO_PERSONALIZADO = 1;                     // Equipamiento guardado en arsenal virtual. 1: Permite, 0: No Permite.
COMPUTADORA_ARTILLERIA = 1;                         // Computadora artilleria. Habilita: 1. Desabilita: 0.
ROL_AUTOMATICO = 1;                                 // 1: Habilita la carga de rol al entrar a la misión por descripción de rol. 0: Desabilita
                                                    // Para verificar que los roles estan bien escritos activar todas las IAs y entrar
GPS = 0;                                            // Agrega GPS vanilla en rol automático o caja. 1: agrega, 0: remueve
VISION_NOCTURNA = 1;                                // Agrega visión nocturna panorámica en rol automático o caja. 1: agrega, 0: remueve
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
HORARIO = "1700 hs.";
FECHA = "01/10/2020";
CLIMA = "Despejado";
UBICACION = "Vihrolati";
SITUACION = ["ArgA ha estado combatiendo duramente las últimas 3 horas.", "Cóndor registró el pueblo de Korpela, encontrando resistencia armada y neutralizando la misma. Ha aterrizado en las inmediaciones de Kirkonkylä para proceder al registro de la ciudad.", "Yaguar registró los poblados de Kouki y Klamina encontrando y neutralizando la resistencia armada. Informó la presencia de un arsenal perteneciente a la guerrilla y lo detonó. En su avance hacia Sorapelto recibió un fuerte contrataque de los insurgentes, por lo que efectuó un repliegue estratégico hacia Klamina. Punto Foxtrot", "Comandancia continua en la Base Internacional."];
SITUACION_HISTORICA = ["La República de Viro, es un territorio estratégico cuya parte continental posee abundantes recursos naturales y a su vez contiene una serie de islas ubicadas estratégicamente. Debido a la diversidad geográfica y los cambios políticos nunca consolidó un sentimiento nacional único.","Actualmente el estado atraviesa una tensa calma después de la guerra civil que aconteció hace más de 5 años atrás en una situación que fue aprovechada por su vecino del norte, Duesia, una potencia regional. Una antigua provincia de Duesia, que desde la caída de la V.P.C.C. bajo administración de Viro, limítrofe a su anterior nación y con mayoría étnica de esta potencia fue donde se encendió la mecha de la guerra civil. Se sospecha que era apoyada estrechamente con armas y provisiones por Duesia. Se cree que nunca cesó ese apoyo. Una coalición internacional puso fin a la guerra civil y desde entonces mantiene presencia en todo el país para evitar que la historia se repita.","ArgA ha sido recientemente desplegado en la subprefectura de Virolahti, zona donde comenzó la guerra civil, sin embargo, ha permanecido relativamente calmada los últimos tiempos pese a la permisividad del mando anterior las de fuerzas internacionales."];
EXTRACTO_INTELIGENCIA = ["Civiles armados en Korpela dispararon contra Cóndor. Se descubrieron 2 depósitos de vehículos artillados, un arsenal clandestino en la comisaría y otro arsenal camuflado en el bosque. Todo este equipo fue destruido.", "Yaguar encontró una situación similar en Kouki y Klamina.", "Helicópteros de transporte observaron movimientos de civiles armados hacia áreas boscosas en el sector marcado de Yaguar.", "Asimismo, divisaron una columna importante de vehículos en ruta Nº 13 hacia el oeste a medio camino entre Kirkonkylä y Klamina. Se presume que es un contrataque dirigido hacia Klamina.", "El anochecer ocurre cerca de las 1820hs, por lo que se prevé que el ataque enemigo será antes de esa hora, por no contar con equipos de visión nocturna.", "Los pueblos de Skippari y los que están al sur de este se consideran aliados o al menos neutrales."];
OBJETIVOS = ["Cóndor continuará el asalto a la localidad de Kirkonkylä desde el LZ actual. Deberá registrar la misma y sus alrededores, en busca de inteligencia, acopio de armas y/o elementos de combate. Deberá enviar un piloto para reparar provisoriamente el helicóptero dañado ubicado en 020 099. Concluidas las reparaciones parciales deberá llevarlo a la Base Internacional para una mejor reparación.", "Yaguar deberá registrar en búsqueda de arsenales todo sector de las áreas marcadas en tableta GPS. Estas indican los núcleos de movimiento de guerrilla aportados por inteligencia.", "Reglas de Combate:", "Se consideran hostiles, todos los civiles armados en los objetivos de Cóndor y Yaguar.", "Todo civil armado fuera de dichas zonas debe ser considerado hostil solamente si abre fuego sin provocación contra ArgA. Disparar en presencia de civiles, aunque sea al aire o en otra dirección puede ser considerado una provocación. No disparar en presencia de civiles bajo ninguna circunstancia si estos no disparan primero.", "Se deberá destruir todo acopio de armamento y/o vehículos adaptados para el combate.", "No disparar o responder fuego de fuerzas regulares del país limítrofe. Aunque se encuentren en territorio de Viro."];
RECURSOS = ["Aparecemos armados y listos para el combate.","Arsenal limitado.","Vehículos terrestres para Yaguar en Klamina::","-1 Humvee artillado con municion practicamente agotada.","-2 Humvees transporte.","-0 Humvee médico.","-1 Vehículo artillado","2 transportes de personal y 1 Furgón. Todos civiles capturados en Base.","-0 Blindado liviano M1117 cedido por la Fuerza Internacional.","Vehículos para Cóndor:","-1 Blackhawk artillado. 1 Blackhawk artillado averiado en 020 099. Cedidos por la Fuerza Internacional.","-1 Camión para reabastecimiento y reparaciónes."];
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
IA_BLUFOR = 0;                                      // 1: No desactiva la IA Blufor, 0: la desactiva.
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