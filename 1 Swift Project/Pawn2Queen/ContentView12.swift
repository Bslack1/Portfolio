//
//  ContentView12.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 11/16/22.
// Fake setting page will go here with some fake toggles for sound etc.

import SwiftUI

struct ContentView12: View {
    @State private var showSound = true
    
    var body: some View {
        NavigationStack {
            VStack{
                Spacer()
                Text("Settings")
                    .bold()
                    .font(.largeTitle)
                Toggle("Sound", isOn: $showSound)
                    .padding()
                    .font(.title2)
                    .fontWeight(.bold)
                
                if showSound{
                    Text("Sound is on")
                    
                Spacer()
                }
                
                
                
                MainMenuButton()
            }
        }
    }
}

struct ContentView12_Previews: PreviewProvider {
    static var previews: some View {
        ContentView12()
    }
}
