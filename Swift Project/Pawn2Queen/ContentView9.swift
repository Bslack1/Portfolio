//
//  ContentView8.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/31/22.
//  Teal

import SwiftUI

struct ContentView9: View {
    var body: some View {
        NavigationStack {
            VStack {
                Text("Help in Crisis")
                    .font(.largeTitle)
                    .fontWeight(.bold)
                    .foregroundColor(Color.teal)
                    .padding()
                Text("Do you need help?")
                    .fontWeight(.bold)
                    .font(.title2)
                    .padding(.bottom)
                Text("If you are having suicidal or self harming thoughts below are help lines by country.")
                    .padding()
                Text("Australia: 13 11 14")
                Text("Canada: 1833.456.4566")
               // Text("China: 400 821 1215")
               // Text("India: 88 881 7666")
                Text("UK: 116 123")
                Text("US: 1-800-273-8255")
                Text("Content about about crisis prevention, crisis hotlines, link to Support.JW, therapist approved articles about what to do, etc.")
                    .padding()
                    .multilineTextAlignment(.center)
                Text("You are not alone!")
                    .font(.title3)
                    .fontWeight(.bold)
                    .foregroundColor(.teal)
                QuickExitButton()
            }
        }
    }
}

struct ContentView9_Previews: PreviewProvider {
    static var previews: some View {
        ContentView9()
    }
}
