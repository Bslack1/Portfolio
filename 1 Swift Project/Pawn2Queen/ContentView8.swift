//
//  ContentView8.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/31/22.
//  Blue

import SwiftUI

struct ContentView8: View {
    var body: some View {
        NavigationStack {
            VStack {
                Text("Legal Options")
                    .font(.largeTitle)
                    .fontWeight(.bold)
                    .foregroundColor(Color.blue)
                    .padding()
                Spacer()
                Text("If you or someone you know was the victim of abuse, there are options.")
                    .font(.title2)
                    .padding()
                    .multilineTextAlignment(.center)
                Text("Links to lawyers working with Ex JW CSA cases, statute of limitations by state/country.")
                    .padding(.bottom)
                    .multilineTextAlignment(.center)
                QuickExitButton()
            }
        }
    }
}

struct ContentView8_Previews: PreviewProvider {
    static var previews: some View {
        ContentView8()
    }
}
