//
//  ContentView11.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 11/16/22.
// Fake Help page will have a fake search function and some generic "how tos"

import SwiftUI

struct ContentView11: View {
    var body: some View {
        VStack {
            Spacer()
            Text("Help!")
                .font(.largeTitle)
                .fontWeight(.bold)
                .foregroundColor(.red)
            Spacer()
            Text("Fear not, you've come to the right place!")
            Spacer()
            Text("To use Pawn2Queen:")
                .fontWeight(.bold)
            Text("Simply hit resume lesson, this will take you setting up a location code. Because Pawn2Queen is in its infancy, you will start from the very beginning. This location code will allow you to resume your lesson where ever you left off! For issues with app functionality, leave a message for the developers in the AppStore.")
                .multilineTextAlignment(.center)
                .padding([.leading, .trailing])
                
            MainMenuButton()
        }
    }
}

struct ContentView11_Previews: PreviewProvider {
    static var previews: some View {
        ContentView11()
    }
}
