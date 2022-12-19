//
//  ContentView6.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/31/22.
//  Red

import SwiftUI

struct ContentView6: View {
    var body: some View {
        NavigationStack {
            VStack {
                Text("Connect With Others")
                    .font(.largeTitle)
                    .fontWeight(.bold)
                    .foregroundColor(Color.red)
                    .padding()
                Text("Vetted safe places to talk to other ex JWs. Also, information about staying safe online, maybe something about avoiding manipulation, etc.")
                    .font(.title2)
                    .padding()
                    .multilineTextAlignment(.center)
                Text("Links for reddit, FB groups, etc.")
                    .padding(.bottom)
                Text("You are not alone!")
                    .font(.title3)
                    .fontWeight(.bold)
                    .foregroundColor(.red)
                QuickExitButton()
            }
        }
    }
}

struct ContentView6_Previews: PreviewProvider {
    static var previews: some View {
        ContentView6()
    }
}
