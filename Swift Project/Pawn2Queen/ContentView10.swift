//
//  ContentView10.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/31/22.
//  Green

import SwiftUI

struct ContentView10: View {
    var body: some View {
        NavigationStack {
            VStack {
                Text("Education")
                    .font(.largeTitle)
                    .fontWeight(.bold)
                    .padding()
                .foregroundColor(Color.green)
                Text("How to get along on the outside.")
                    .font(.title2)
                    .padding(.bottom)
                Text("Content about getting an education, maybe links to grants, scholarships, etc. Also perhaps a crash course on being independent in the real world.")
                    .padding()
                    .multilineTextAlignment(.center)
                QuickExitButton()
            }
        }
    }
}

struct ContentView10_Previews: PreviewProvider {
    static var previews: some View {
        ContentView10()
    }
}
