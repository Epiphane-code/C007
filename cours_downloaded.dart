import 'package:flutter/material.dart';
import 'dataList.dart';
import 'class.dart';

class Downloaded extends StatefulWidget {
  const Downloaded({super.key});

  @override
  State<Downloaded> createState() =>  DownloadedState(); 
}

class  DownloadedState extends State<Downloaded> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: MesCouleurs.blancPrincipale,
      appBar: AppBar(
        centerTitle: true,
        title: Text("Mes téléchargements"),
      ),
      body: ListView.builder(
            shrinkWrap: true,
            //physics: NeverScrollableScrollPhysics(),
            itemCount: modulesdownload.length,
            itemBuilder: (context, index) {
              //print("la taille est ${modulesdownload.length}");
             MesModules modules=modulesdownload[index];
              return Card(
                color: Colors.white,

                child: Row(

                  mainAxisAlignment: MainAxisAlignment.spaceAround,
                  children: [
                    Flexible(
                      flex: 7,
                      child: Container(
                          
                        child: Row(
                          //mainAxisAlignment: MainAxisAlignment.spaceBetween,
                          children: [
                            Container(
                              width: 50,
                              child:  Icon(Icons.picture_as_pdf, color: MesCouleurs.jaunePrincipale,),
                            ),

                            SizedBox(width: 10,),
                                               
                            Column(
                              crossAxisAlignment: CrossAxisAlignment.start,
                              children: [
                                Text(modules.nom_module, style: TextStyle(fontWeight: FontWeight.bold, fontSize: 16),),
                                Text(modules.categorie_module),
                                Text(modules.taille_module),
                                Text(modules.duree_module),
                              ],
                            ),
                          ],
                        ),
                      ),
                    ),

                       Flexible(
                        flex: 1,
                        child: Icon(Icons.download_done)
                        ),

                  ],
                ),
              );

            }

        ),
    );
  }
}
