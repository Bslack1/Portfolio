//
//  ContentView4.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/31/22.
// Yellow Page

import SwiftUI

struct ContentView4: View {
    var body: some View {
        NavigationStack {
            VStack {
                Text("How to Get Out")
                    .font(.largeTitle)
                    .fontWeight(.bold)
                    .foregroundColor(Color.yellow)
                    .padding()
                Text("...and not lose everyone you know.")
                    .font(.title2)
                    .padding(.bottom)
                Text("The primary purpose of this section is to provide the options for leaving, disfellowshipping vs. dissassociation, PIMO elder approved methods, fading, etc.")
                    .multilineTextAlignment(.center)
                    .padding()
                QuickExitButton()
            }
        }
    }
}


struct ContentView4_Previews: PreviewProvider {
    static var previews: some View {
        ContentView4()
    }
}
