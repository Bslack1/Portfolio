//
//  RealMenu.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/31/22.
//

import SwiftUI

struct RealMenu: View {
    var body: some View {
        NavigationStack{
            List{
                NavigationLink(destination: ContentView4())
                {Text("Options for Getting Out")
                    .foregroundColor(.yellow)}
                    .bold()
                NavigationLink(destination: ContentView5())
                {Text("Support")
                    .foregroundColor(.orange)}
                    .bold()
                NavigationLink(destination: ContentView6())
                {Text("Connect With Others")
                    .foregroundColor(.red)}
                    .bold()
                NavigationLink(destination: ContentView7())
                {Text("Get The Facts")
                    .foregroundColor(.purple)}
                    .bold()
                NavigationLink(destination: ContentView8())
                {Text("Legal Options")
                    .foregroundColor(.blue)}
                    .bold()
                NavigationLink(destination: ContentView9())
                {Text("Help in Crisis")
                    .foregroundColor(.teal)}
                    .bold()
                NavigationLink(destination: ContentView10())
                {Text("Education")
                    .foregroundColor(.green)}
                    .bold()
            }
            .navigationTitle("Content Menu")
        }
    }
}

struct RealMenu_Previews: PreviewProvider {
    static var previews: some View {
        RealMenu()
    }
}
