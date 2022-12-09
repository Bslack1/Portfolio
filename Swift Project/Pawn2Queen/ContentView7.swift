//
//  ContentView7.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/31/22.
//  Purple

import SwiftUI

struct ContentView7: View {
    var body: some View {
        NavigationStack {
            VStack {
                Text("Get The Facts")
                    .font(.largeTitle)
                    .fontWeight(.bold)
                    .foregroundColor(Color.purple)
                    .padding()
                Text("The truth about \"the truth\".")
                    .font(.title2)
                    .padding(.bottom)
                Text("Links to JWWatch, JWFacts, Watchtower docs, etc.")
                    .padding(.bottom)
                    .multilineTextAlignment(.center)
                QuickExitButton()
            }
        }
    }
}

struct ContentView7_Previews: PreviewProvider {
    static var previews: some View {
        ContentView7()
    }
}
