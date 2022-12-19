//
//  ContentView5.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/31/22.
//  Orange

import SwiftUI

struct ContentView5: View {
    var body: some View {
        NavigationStack {
            VStack {
                    Text("Support")
                        .font(.largeTitle)
                        .fontWeight(.bold)
                        .foregroundColor(Color.orange)
                        .padding()
                    Text("You are not alone!")
                        .font(.title2)
                        .padding(.bottom)
                    Text("Content about life outside the borg, therapist approved articles, JWSupport articles, information about grants providing free therapy in US and other places that it is a necessity.")
                        .multilineTextAlignment(.center)
                        .padding()
                    QuickExitButton()
            }
        }
    }
}

struct ContentView5_Previews: PreviewProvider {
    static var previews: some View {
        ContentView5()
    }
}
