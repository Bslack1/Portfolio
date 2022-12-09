//
//  ContentView3.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 10/31/22.
//

import SwiftUI

struct ContentView3: View {
    var body: some View {
        NavigationStack {
            VStack {
                RealMenu()
                QuickExitButton()
            }
        }
    }
}

struct ContentView3_Previews: PreviewProvider {
    static var previews: some View {
        ContentView3()
    }
}
