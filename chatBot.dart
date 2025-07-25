import 'package:flutter/material.dart';
import 'dataList.dart';
import 'class.dart';
class ChatBot extends StatefulWidget {
  const ChatBot({super.key});

  @override
  State<ChatBot> createState() => _ChatBotState();
}

class _ChatBotState extends State<ChatBot> {
  
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: const Color.fromARGB(255, 4, 1, 30),
      appBar: AppBar(
        centerTitle: true,
        title: Text("ChatBot", style: TextStyle(color: MesCouleurs.bleuPrincipale),),
        backgroundColor: Colors.black,


      ),
     //backgroundColor: Color(Colors.),

      body: Center(
        child: Container(
          margin: EdgeInsets.all(15),
          decoration: BoxDecoration(
            border: Border.all(width: 3, color: Colors.black),
            borderRadius: BorderRadius.circular(16),
           gradient: LinearGradient(
           colors: [
          const Color.fromARGB(170, 3, 4, 8),
          const Color.fromARGB(255, 5, 29, 54),
          const Color.fromARGB(255, 9, 11, 29),
          ],
           begin: Alignment.topLeft,
           end: Alignment.bottomRight,
           ),),
          child: Column(
            children: [
              Expanded(
                flex: 8,
                child: ListView.builder(
                   shrinkWrap: true,
                   //physics: NeverScrollableScrollPhysics(),
                  itemCount: chatBot.length,
                  itemBuilder: (context, index){
                    ChatBotClass message = chatBot[index];
                    return Column(
                      //crossAxisAlignment: CrossAxisAlignment.,
                      children: [
                        Row(
                           mainAxisAlignment: MainAxisAlignment.spaceBetween,
                          children: [
                           SizedBox(width: 10,),
                            Container(
                              //height: 50,
                              margin: EdgeInsets.only(right: 20),
                              padding:EdgeInsets.fromLTRB(10, 20, 10, 20),
                              decoration: BoxDecoration(
                                borderRadius: BorderRadius.circular(16),
                                color: const Color.fromARGB(255, 49, 80, 95)
                              ),
                              child: Text(message.message),
                            ),
                            
                          ],
                        ),
                        SizedBox( height: 20,),
                        Row(
                           mainAxisAlignment: MainAxisAlignment.spaceBetween,
                          children: [
                            Container(
                              //height: 50,
                              margin: EdgeInsets.only(left: 20),
                              padding:EdgeInsets.fromLTRB(10, 20, 10, 20),
                              decoration: BoxDecoration(
                                borderRadius: BorderRadius.circular(16),
                                color: const Color.fromARGB(255, 49, 80, 95)
                              ),
                              child: Text(message.reponse),
                            ),
                            SizedBox(width: 10,),
                          ],
                        ),
                        SizedBox( height: 20,),
                      ],
                    );
                  }
                  ),
              ),
          
          
          
                Expanded(
                  flex: 2,
          
                  child: Row(
                  children: [
                    Expanded(child: Text("")),
                    Expanded(
                      flex: 8,
                      child: TextField(
                      
                      
                      decoration: InputDecoration(
                      
                      //prefixIcon: Icon(Icons.message, color: Colors.black),
                      suffixIcon: IconButton(onPressed: () {

                      }, icon: Icon(Icons.send)),                              
                      //labelText: 'Recherche',
                      hintStyle: TextStyle(color: Colors.black),                                 
                      hintText: 'Posez votre question ici',
                      filled: true,
                      fillColor: Colors.white,
                      contentPadding: EdgeInsets.symmetric(horizontal: 20),
                      border: OutlineInputBorder(
                      borderRadius: BorderRadius.circular(100),
                      //borderSide: BorderSide.none,
                            ),
                      ),
                      ),
                    ),
                    Expanded(child: Text("")),
                  ],
                ))
          
          
            ],
          ),
          
        ),
      ),
    );
  }
}